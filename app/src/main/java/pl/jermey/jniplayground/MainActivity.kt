package pl.jermey.jniplayground

import android.os.AsyncTask
import android.os.Bundle
import android.support.v7.app.AppCompatActivity
import android.util.Log
import kotlinx.android.synthetic.main.activity_main.*
import pl.jermey.externallibrary.NativeModule

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        sample_text.text = NativeModule().helloWorld()
        Log.d("THREAD1", NativeModule().helloWorld())
        Task().execute()
    }

    class Task : AsyncTask<Void, Void, String>() {
        override fun doInBackground(vararg params: Void?): String {
            Log.d("THREAD2", NativeModule().helloWorld())
            return String()
        }
    }

}
